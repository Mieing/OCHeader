@class GACAppCheckToken, NSError, NSString;

@interface GIDAppCheckProviderFake : NSObject <GACAppCheckProvider>

@property (retain, nonatomic) GACAppCheckToken *token;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
