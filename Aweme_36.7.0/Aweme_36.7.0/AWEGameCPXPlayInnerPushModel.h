@class NSDictionary, NSURL, AWEInnerPushControlModel;

@interface AWEGameCPXPlayInnerPushModel : NSObject

@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSURL *imageUrl;
@property (nonatomic) unsigned long long pushScene;
@property (retain, nonatomic) AWEInnerPushControlModel *pushControlModel;
@property (copy, nonatomic) id /* block */ clickBlock;

- (id)initWithData:(id)a0 scene:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setup;

@end
