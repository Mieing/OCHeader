@class IESECMallInnerFeedImmersionPrivilegeTagView, NSMutableArray;

@interface IESECMallInnerFeedImmersionPrivilegeMultiTagView : UIView

@property (retain, nonatomic) IESECMallInnerFeedImmersionPrivilegeTagView *firstTag;
@property (retain, nonatomic) IESECMallInnerFeedImmersionPrivilegeTagView *secondTag;
@property (nonatomic) double totalWidth;
@property (retain, nonatomic) NSMutableArray *reportProductPrivilegeTagArrays;

- (void)updateWithModel:(id)a0 maxWidth:(double)a1 completion:(id /* block */)a2;
- (void)addReportPrivilegeTagWithModel:(id)a0;
- (void).cxx_destruct;

@end
