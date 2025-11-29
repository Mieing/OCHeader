@class NSNumber, NSArray, NSString;

@interface AWEIMGroupJoinPanelPopupInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSArray *noticeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)noticeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
