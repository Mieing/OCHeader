@class NSString, NSArray;

@interface WASMTPageSheetViewModel : WAAuthPageSheetViewModel

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long backButtonType;
@property (retain, nonatomic) NSArray *templeteMessageList;

- (void).cxx_destruct;

@end
