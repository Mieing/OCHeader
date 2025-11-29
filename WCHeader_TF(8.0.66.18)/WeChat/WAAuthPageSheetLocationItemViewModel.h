@class NSString;

@interface WAAuthPageSheetLocationItemViewModel : NSObject

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isSelected;

- (id)initWithTitle:(id)a0 index:(long long)a1 isSelected:(BOOL)a2;
- (void).cxx_destruct;

@end
