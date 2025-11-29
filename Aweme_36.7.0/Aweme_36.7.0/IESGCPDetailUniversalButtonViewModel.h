@class IESGCPDetailUniversalButtonStyle, NSDictionary;

@interface IESGCPDetailUniversalButtonViewModel : IESGCPDetailBaseViewModel

@property (retain, nonatomic) IESGCPDetailUniversalButtonStyle *buttonStyle;
@property (copy, nonatomic) NSDictionary *statusStyleDic;

- (void)parseButtonStyle;
- (id)parseButtonStyleWithContent:(id)a0;
- (id)parseButtonStyleWithContent:(id)a0 buttonStyleClass:(Class)a1;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
