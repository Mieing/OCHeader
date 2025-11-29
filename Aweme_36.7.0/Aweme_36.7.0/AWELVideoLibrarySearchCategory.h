@class NSString;

@interface AWELVideoLibrarySearchCategory : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *alias;
@property (copy, nonatomic) NSString *wordName;
@property (copy, nonatomic) NSString *searchKey;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long rank;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
