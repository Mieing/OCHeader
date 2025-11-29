@class NSAttributedString, NSIndexPath;

@interface IESIMMdTableCollectionViewCellRenderContext : NSObject

@property (retain, nonatomic) NSAttributedString *attrStr;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) BOOL isTitleRow;
@property (nonatomic) BOOL needSectionSeparator;

- (void).cxx_destruct;

@end
