@class NSString;

@interface AWEECOMIMRichTextPlaceHolder : MTLModel <MTLJSONSerializing, AWEECOMIMRichTextExt>

@property (copy, nonatomic) NSString *keyId;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *URLType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *btmCDID;
@property (nonatomic) BOOL bold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
