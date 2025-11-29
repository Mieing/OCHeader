@class NSString;

@interface MMFinderLiveFeedStreamCarouselTextLineItem : MMFinderLiveFeedStreamCarouselBaseItem <MMFinderLiveFeedStreamCarouselItemProtocol>

@property (nonatomic) BOOL hideTitle;
@property (nonatomic) BOOL showHardAdLogo;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long cellType;
@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, nonatomic) unsigned long long uiStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
