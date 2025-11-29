@class NSMutableArray;
@protocol MMScrollActionSheetDelegate;

@interface ScrollActionSheetConfig : NSObject

@property (retain, nonatomic) NSMutableArray *itemTypes;
@property (weak, nonatomic) id<MMScrollActionSheetDelegate> delegate;

- (id)init;
- (id)initWithDelegate:(id)a0 itemTypes:(id)a1;
- (void)addItemType:(int)a0;
- (void)addItemTypes:(id)a0;
- (void).cxx_destruct;

@end
