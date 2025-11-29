@class NSString;

@interface AWECoCreatorTitleCellModel : NSObject <AWECoCreatorCellProtocol>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasLine;
@property (nonatomic) BOOL hasTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightWithNoLine;
+ (double)cellHeightWithHasLine;

- (void).cxx_destruct;
- (double)cellHeight;

@end
