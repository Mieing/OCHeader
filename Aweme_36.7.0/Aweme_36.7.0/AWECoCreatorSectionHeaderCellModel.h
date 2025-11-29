@class NSString;

@interface AWECoCreatorSectionHeaderCellModel : NSObject <AWECoCreatorCellProtocol>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isLargeCoActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)cellHeight;

@end
