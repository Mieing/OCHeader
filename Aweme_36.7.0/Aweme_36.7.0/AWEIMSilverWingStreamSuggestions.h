@class NSString;

@interface AWEIMSilverWingStreamSuggestions : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long idx;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
