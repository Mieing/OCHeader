@class NSString, NSDictionary, NSError;

@interface IESIMPublishMessagePublishInfo : NSObject

@property (copy, nonatomic) NSString *videoPath;
@property (retain, nonatomic) NSDictionary *imPostInfo;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSDictionary *trackInfo;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double transToVideoDuration;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long msgCount;
@property (copy, nonatomic) id /* block */ prepareEditCompletion;

- (id)conversationType:(id)a0;
- (id)initWithActionType:(unsigned long long)a0 conversation:(id)a1 uiInfo:(id)a2;
- (void).cxx_destruct;

@end
