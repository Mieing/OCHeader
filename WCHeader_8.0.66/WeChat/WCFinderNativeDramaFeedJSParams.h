@class NSString, JsApiSourceInfo;

@interface WCFinderNativeDramaFeedJSParams : NSObject

@property (copy, nonatomic) NSString *exportFromObjectId;
@property (copy, nonatomic) NSString *exportNativeDramaId;
@property (retain, nonatomic) JsApiSourceInfo *sourceInfo;
@property (copy, nonatomic) id /* block */ onViewDisappear;

- (void).cxx_destruct;

@end
