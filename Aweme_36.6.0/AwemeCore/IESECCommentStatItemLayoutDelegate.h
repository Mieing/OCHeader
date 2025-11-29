@class NSArray, NSString;

@interface IESECCommentStatItemLayoutDelegate : NSObject <IESECCommentStatCellLayoutSizeDelegate>

@property (retain, nonatomic) NSArray *commentTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForCellAtIndex:(unsigned long long)a0;

@end
