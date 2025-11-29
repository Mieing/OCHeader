@class UIColor, NSString;

@interface IESGCPNormalTagItem : IESGCPEdgeInsetsLabel <IESGCPTagViewProtocol>

@property (nonatomic) double fontSize;
@property (nonatomic) double padding;
@property (retain, nonatomic) UIColor *tagTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tagStyleParamsDidUpdate;
- (void).cxx_destruct;

@end
