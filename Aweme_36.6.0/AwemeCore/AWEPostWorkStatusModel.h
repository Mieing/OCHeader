@class NSString;

@interface AWEPostWorkStatusModel : NSObject

@property (retain, nonatomic) Class cellClass;
@property (copy, nonatomic) NSString *cellIdentifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ cellSizeBlock;
@property (copy, nonatomic) id /* block */ referenceSizeBlock;
@property (copy, nonatomic) id /* block */ configCellBlock;

- (void).cxx_destruct;

@end
