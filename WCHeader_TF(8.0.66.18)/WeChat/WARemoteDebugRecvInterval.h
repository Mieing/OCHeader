@class NSMutableArray;

@interface WARemoteDebugRecvInterval : NSObject

@property (nonatomic) unsigned int start;
@property (nonatomic) unsigned int end;
@property (retain, nonatomic) NSMutableArray *messageList;

- (void)mergeRecvInterval:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
