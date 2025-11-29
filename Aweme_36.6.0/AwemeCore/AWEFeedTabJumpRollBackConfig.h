@class NSArray, NSDictionary, NSString;

@interface AWEFeedTabJumpRollBackConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long autoFoldTime;
@property (nonatomic) long long autoDismissTime;
@property (retain, nonatomic) NSArray *unSupportedTabList;
@property (retain, nonatomic) NSDictionary *bottomOffsetDict;
@property (retain, nonatomic) NSDictionary *showTextDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
