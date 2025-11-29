@class NSString, CEmoticonWrap;

@interface EmoticonPreviewModel : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (retain, nonatomic) NSString *emoticonDescription;
@property (retain, nonatomic) NSString *pageWrapPid;
@property (retain, nonatomic) NSString *prevPageWrapPid;
@property (readonly, nonatomic) double height;
@property (nonatomic) BOOL showDesc;
@property (nonatomic) BOOL enableOperation;
@property (nonatomic) unsigned long long index;
@property (nonatomic) int scene;
@property (retain, nonatomic) CEmoticonWrap *emoticonWrap;

- (id)init;
- (BOOL)isEmoticonCanMod;
- (BOOL)isEmoticonCanDelete;
- (BOOL)isEmoticonCanShowStoreDetail;
- (unsigned long long)convetToCustomEmoticonTypeWhenCanMod;
- (int)calScene;
- (void)reportAction:(int)a0;
- (void).cxx_destruct;

@end
