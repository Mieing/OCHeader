@class IESECDLModel, NSMutableDictionary, UIView;

@interface IESECDLBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *childrenViewMap;
@property (readonly, nonatomic) UIView *dlView;
@property (retain, nonatomic) IESECDLModel *dlModel;

- (id)traverseLayoutWithDLModel:(id)a0;
- (void)makeLayoutForView:(id)a0 dlModel:(id)a1;
- (void).cxx_destruct;
- (id)build;
- (id)init;

@end
