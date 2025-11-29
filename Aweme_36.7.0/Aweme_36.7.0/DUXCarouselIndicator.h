@class NSString, NSMutableArray, UIColor;

@interface DUXCarouselIndicator : UIView <IESIMCarouselIndicatorProtocol>

@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *dotViews;
@property (nonatomic) BOOL changing;
@property (retain, nonatomic) UIColor *currentPageColor;
@property (retain, nonatomic) UIColor *dotColor;
@property (nonatomic) double dotSize;
@property (nonatomic) double pageSize;
@property (nonatomic) double maxScale;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long enlargeType;

@end
