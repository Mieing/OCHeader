@class NSString, HTSLiveRoom;

@interface IESLiveDislikeInfoBox : NSObject

@property (retain, nonatomic) HTSLiveRoom *dislikeRoom;
@property (copy, nonatomic) NSString *roomEnterFrom;
@property (copy, nonatomic) NSString *roomEnterMethod;
@property (copy, nonatomic) NSString *feedPageFrom;
@property (nonatomic) BOOL roomIsHot;
@property (nonatomic) long long dislikeEnterFromType;

- (void).cxx_destruct;

@end
