@class NSString, NSArray, AWEURLModel;
@protocol IESIMAudioMessageRecorderInterface;

@interface AWEIMRedPacketOpenInputModel : NSObject

@property (nonatomic) long long openType;
@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSString *orderNO;
@property (retain, nonatomic) NSString *quoteReplyMessageID;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *paramsForActivity;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) id<IESIMAudioMessageRecorderInterface> recorder;
@property (copy, nonatomic) id /* block */ onOpenCompletion;
@property (copy, nonatomic) id /* block */ onStageChanged;
@property (retain, nonatomic) AWEURLModel *resourceUrl;
@property (copy, nonatomic) NSArray *stickerIdList;

- (void).cxx_destruct;

@end
