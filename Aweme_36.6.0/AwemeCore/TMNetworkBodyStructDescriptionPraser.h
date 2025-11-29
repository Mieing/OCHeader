@protocol TMNetworkBodyStructDescriptionPraserDelegate;

@interface TMNetworkBodyStructDescriptionPraser : NSObject

@property (weak, nonatomic) id<TMNetworkBodyStructDescriptionPraserDelegate> delegate;

- (void)setupDelegate:(id)a0;
- (unsigned long long)valueToBodyStructType:(id)a0;
- (BOOL)isMap:(id)a0;
- (id)bodyFieldAction:(id)a0 error:(id *)a1;
- (BOOL)checkIsContinue:(id)a0;
- (void)traverseBody:(id)a0 bodyStructDescription:(id)a1 error:(id *)a2;
- (id)prasePathToBodyStruct:(id)a0;
- (void).cxx_destruct;
- (BOOL)isArray:(id)a0;
- (id)initWithDelegate:(id)a0;

@end
