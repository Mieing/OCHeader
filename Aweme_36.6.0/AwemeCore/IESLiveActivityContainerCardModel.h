@class NSNumber, NSString;

@interface IESLiveActivityContainerCardModel : IESLiveDynamicModel

@property (nonatomic) double cardViewBottomY;
@property (nonatomic) double cardViewLeftX;
@property (nonatomic) struct CGSize { double width; double height; } cardViewSize;
@property (copy, nonatomic) id /* block */ cardDisappearCompletionBlock;
@property (nonatomic) BOOL showInRightBotttom;
@property (retain, nonatomic) NSNumber *showTime;
@property (retain, nonatomic) NSNumber *durationToShowTime;
@property (copy, nonatomic) NSString *detailPageURL;
@property (copy, nonatomic) NSString *containerCardURL;
@property (copy, nonatomic) NSString *toolbarEntranceKey;

- (id)description;
- (id)init;

@end
