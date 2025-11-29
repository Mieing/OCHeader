@interface AWETaskPagePopupInfo : NSObject

@property (nonatomic) BOOL signInPopFirstShow;
@property (nonatomic) BOOL signInPopFirstClicked;
@property (nonatomic) BOOL signInPopExtraShow;
@property (nonatomic) BOOL signInPopExtraClicked;
@property (nonatomic) BOOL signInCellClicked;
@property (nonatomic) BOOL isClientAIShow;

+ (id)new;

@end
