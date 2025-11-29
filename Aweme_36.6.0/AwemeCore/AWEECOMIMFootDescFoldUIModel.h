@class NSString, AWEECOMIMFoldInfoModel;

@interface AWEECOMIMFootDescFoldUIModel : NSObject

@property (retain, nonatomic) AWEECOMIMFoldInfoModel *foldInfo;
@property (nonatomic) BOOL showFoldButton;
@property (nonatomic) BOOL showRedPoint;
@property (copy, nonatomic) NSString *text;

- (id)initWithShowFoldButton:(BOOL)a0 showRedPoint:(BOOL)a1 text:(id)a2;
- (void).cxx_destruct;

@end
