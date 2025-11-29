@class NSString;

@interface IESLiveGCStreamLayoutInputPutData : NSObject

@property (copy, nonatomic) NSString *putId;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) BOOL visible;
@property (nonatomic) unsigned long long rotate;
@property (nonatomic) unsigned long long level;

- (void)parseMetaInfo:(id)a0;
- (BOOL)isEqualToOther:(id)a0;
- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
