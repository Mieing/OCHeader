@class NSString, NSDictionary;

@interface GXTemplateItem : NSObject

@property (nonatomic) BOOL isLocal;
@property (copy, nonatomic) NSString *bizId;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *templateVersion;
@property (retain, nonatomic) NSDictionary *rootStyleInfo;
@property (copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (BOOL)isAvailable;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
