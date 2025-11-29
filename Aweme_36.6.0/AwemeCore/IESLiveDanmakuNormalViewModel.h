@class UIColor, NSAttributedString, NSString;

@interface IESLiveDanmakuNormalViewModel : NSObject <IESLiveDanmakuViewModelProtocol>

@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) BOOL showContentBorder;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) id metaData;
@property (nonatomic) double danmakuHeight;
@property (copy, nonatomic) NSAttributedString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
