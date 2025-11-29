@class NSString, NSArray;

@interface WABasePickerViewModel : NSObject

@property (copy, nonatomic) NSString *headerText;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *currentSelectedIdx;
@property (nonatomic) double contentMaxHeight;

- (id)initWithItems:(id)a0 currentSelectedIdx:(id)a1;
- (id)titleForRow:(long long)a0 forComponent:(long long)a1;
- (void).cxx_destruct;

@end
