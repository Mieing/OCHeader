@class NSString;

@interface AWEIMPrivateChatManagementFilterCellModel : NSObject

@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) unsigned long long type;

- (id)initWithTitle:(id)a0 isSelected:(BOOL)a1 type:(unsigned long long)a2;
- (void).cxx_destruct;

@end
