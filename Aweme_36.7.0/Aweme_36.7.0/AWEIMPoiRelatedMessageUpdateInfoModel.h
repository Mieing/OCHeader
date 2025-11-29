@class NSArray, NSString, AWEIMShareSubInfoModel;

@interface AWEIMPoiRelatedMessageUpdateInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *coverUrls;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) AWEIMShareSubInfoModel *subInfo;
@property (nonatomic) long long activeStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
