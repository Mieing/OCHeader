@class AWEAwemeModel;
@protocol IESVideoPlayerProtocol;

@interface AWEFloatVideoData : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<IESVideoPlayerProtocol> player;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (nonatomic) BOOL update;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
