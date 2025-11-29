@class NSString, ACCDraftURS;

@interface AWECustomProResource : NSObject

@property (copy, nonatomic) NSString *exportTaskId;
@property (retain, nonatomic) ACCDraftURS *packageURS;
@property (retain, nonatomic) ACCDraftURS *iconURS;

- (void).cxx_destruct;

@end
