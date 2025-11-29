@class NSString;

@interface AWEBaseListCellViewModel : NSObject

@property (retain, nonatomic) id model;
@property (copy, nonatomic) NSString *viewModelId;
@property (nonatomic) long long index;
@property (copy, nonatomic) id /* block */ markDeletedBlock;

+ (id)viewModelWithModel:(id)a0;

- (void)setupWithModel:(id)a0;
- (id)erasedToAny;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)markDeleted;

@end
