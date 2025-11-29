@interface OTMTimeFormatter : NSObject

+ (id)formatHHMMSS:(id)a0;
+ (id)formatMMSS:(id)a0;
+ (id)formatMSS:(id)a0;
+ (id)formatMSSWithSimplification:(id)a0;
+ (id)formatMSSWithPrimeSeperator:(id)a0;
+ (id)FormatTimecodeEndingCentis:(id)a0;
+ (id)FormatTimecodeEndingFrames:(id)a0 frameDuration:(id)a1;
+ (id)formatHHMMSSForTimeInterval:(double)a0;
+ (id)formatMMSSForTimeInterval:(double)a0;
+ (id)formatMSSWithSimplificationForTimeInterval:(double)a0;
+ (id)formatMSSForTimeInterval:(double)a0;
+ (id)formatMSSWithPrimeSeperatorForTimeInterval:(double)a0;

@end
