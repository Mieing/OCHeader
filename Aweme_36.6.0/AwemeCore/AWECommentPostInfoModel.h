@class NSString;
@protocol AWECommentPostValueProtocol;

@interface AWECommentPostInfoModel : NSObject

@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *logInfo;
@property (retain, nonatomic) id<AWECommentPostValueProtocol> value;

- (void).cxx_destruct;

@end
