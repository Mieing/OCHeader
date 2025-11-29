@class NSArray, NSString;

@interface BTImageItemCellViewModel : BTReaderItemCellViewModel

@property (readonly, nonatomic) NSArray *picUrls;
@property (readonly, nonatomic) NSString *digestStr;

+ (BOOL)canCreateViewModelWithReaderWrap:(id)a0 msgWrap:(id)a1;

- (id)itemViewClassName;
- (double)viewHeight;
- (double)titleMaxWidth;
- (unsigned long long)digestLineNumber;
- (id)friendsReadStr;
- (unsigned long long)picNum;
- (void).cxx_destruct;

@end
