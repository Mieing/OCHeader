@class NSString;

@interface AWEBookInfoBarModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bookID;
@property (copy, nonatomic) NSString *bookTitle;
@property (copy, nonatomic) NSString *jumpInnerSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
