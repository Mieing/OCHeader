@class AWEURLModel;
@protocol AWEIMEncryptCoverResourceProtocol;

@interface AWEIMMediaViewConfigModel : NSObject

@property (nonatomic) long long type;
@property (nonatomic) struct CGSize { double width; double height; } coverSize;
@property (copy, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) id<AWEIMEncryptCoverResourceProtocol> coverResource;

- (void).cxx_destruct;

@end
