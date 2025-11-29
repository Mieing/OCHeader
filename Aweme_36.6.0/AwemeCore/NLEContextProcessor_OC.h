@protocol NLEContextProcessorDelegate;

@interface NLEContextProcessor_OC : NSObject

@property (nonatomic) id<NLEContextProcessorDelegate> delegate;

+ (id)encryptWithContext:(id)a0;
+ (id)decryptWithContextPath:(id)a0;
+ (void)registerDelegate:(id)a0;
+ (id)sharedInstance;

- (id)init;

@end
