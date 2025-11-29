@class NSString;

@interface AWETheaterSectionItemHistoryInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long progress;
@property (nonatomic) BOOL hasUpdate;
@property (copy, nonatomic) NSString *updateText;
@property (copy, nonatomic) NSString *watchText;
@property (nonatomic) long long longVideoTag;
@property (copy, nonatomic) NSString *awemeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
