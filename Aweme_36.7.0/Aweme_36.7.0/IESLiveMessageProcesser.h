@class NSString;
@protocol IESLiveMessageProcessOutput;

@interface IESLiveMessageProcesser : NSObject <IESLiveMessageProcesser>

@property (retain, nonatomic) IESLiveMessageProcesser *next;
@property (weak, nonatomic) id<IESLiveMessageProcessOutput> output;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)process:(id)a0;
- (void).cxx_destruct;

@end
