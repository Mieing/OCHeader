@class UIResponder, NSDictionary, NSThread;

@interface IRISDataModelElement : IRISDataModel

@property (weak, nonatomic) UIResponder *objectRef;
@property (retain, nonatomic) NSDictionary *referDictionary;
@property (weak) NSThread *thread;
@property (retain, nonatomic) NSDictionary *userInfo;

- (id)referData;
- (void)_parseElement;
- (void).cxx_destruct;
- (void)setElement:(id)a0;

@end
