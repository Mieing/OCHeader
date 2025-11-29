@class NSString, NSNumber;

@interface IESLivePublishPlaybackJSBParamObject : NSObject

@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *coverURL;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *fragmentID;

- (void).cxx_destruct;

@end
