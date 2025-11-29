@class NSString, UIColor;
@protocol ILinkEventExt;

@interface TextStyExpandAndCollapseObj : NSObject

@property (nonatomic) BOOL isExpand;
@property (retain, nonatomic) NSString *truncatedTrailingLinkText;
@property (retain, nonatomic) NSString *truncatedTrailingLinkUrl;
@property (retain, nonatomic) UIColor *truncatedTrailingLinkColor;
@property (weak, nonatomic) id<ILinkEventExt> linkDelegate;

- (void).cxx_destruct;

@end
