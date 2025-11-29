@interface IESLiveIMMessageDelayUtil : NSObject

+ (double)decideDelayMessageDispatchTime:(id)a0 streamDelayTime:(double)a1;
+ (id)getExtraDictWithMsg:(id)a0 error:(id *)a1;
+ (double)getAnchorSendIMTimeStampWithDict:(id)a0;
+ (BOOL)getIsNeedDelayIMWithDict:(id)a0;

@end
