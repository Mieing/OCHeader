@class TIMXOMessage;

@interface TIMXOMessageDetailInfo : NSObject

@property (nonatomic) int messageStatus;
@property (retain, nonatomic) TIMXOMessage *message;

- (void).cxx_destruct;

@end
