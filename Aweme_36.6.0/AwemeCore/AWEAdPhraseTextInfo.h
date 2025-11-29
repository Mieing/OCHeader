@class NSString;

@interface AWEAdPhraseTextInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
