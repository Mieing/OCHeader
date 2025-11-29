@class NSString, NSMutableArray;
@protocol IESVSMessageFilter;

@interface IESVSMessageFilter : NSObject <IESVSMessageFilter> {
    NSMutableArray *_receivedMessageIDs;
}

@property (nonatomic) long long maxMessageCount;
@property (retain, nonatomic) id<IESVSMessageFilter> nextFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
