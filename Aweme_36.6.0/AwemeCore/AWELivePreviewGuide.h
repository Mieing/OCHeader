@class NSString, NSArray, AWEURLModel;

@interface AWELivePreviewGuide : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *icon;
@property (retain, nonatomic) NSString *tip;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSArray *rollTips;
@property (nonatomic) long long couponMateId;
@property (nonatomic) long long userTagGetCoin;
@property (nonatomic) long long liveMessionStyle;
@property (retain, nonatomic) NSString *editType;
@property (copy, nonatomic) NSString *enterTip;
@property (retain, nonatomic) NSArray *enterRollTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)parseFromOriginRoomModel:(id)a0;

- (void).cxx_destruct;

@end
