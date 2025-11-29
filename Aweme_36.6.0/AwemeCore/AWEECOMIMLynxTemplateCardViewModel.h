@class NSString, NSNumber;

@interface AWEECOMIMLynxTemplateCardViewModel : AWEECOMIMLynxViewViewModel

@property (copy, nonatomic) NSString *lynxScheme;
@property (copy, nonatomic) NSNumber *defaultHeight;
@property (copy, nonatomic) NSNumber *defaultWidth;

- (id)lynxCardSchema;
- (id)initWithMsgModel:(id)a0;
- (id)_buildClientData;
- (id)_buildContainerContext;
- (BOOL)isDictionary1:(id)a0 equalToDictionary2:(id)a1 withKey:(id)a2;
- (void)receiveDynamicDataWithSuccess:(BOOL)a0 forceUpdate:(BOOL)a1;
- (struct CGSize { double x0; double x1; })lynxDefaultSize;
- (void).cxx_destruct;
- (id)cardType;

@end
