@class NSString, NSDate;

@interface AWEAdRichAwemeStatusManager : HTSService <AWEAdRichAwemeStatusProtocol>

@property (retain, nonatomic) NSDate *enterDate;
@property (nonatomic) long long index;
@property (nonatomic) long long playTimes;
@property (nonatomic) long long sumIndex;
@property (readonly, nonatomic) long long duration;
@property (nonatomic) long long albumImagesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
