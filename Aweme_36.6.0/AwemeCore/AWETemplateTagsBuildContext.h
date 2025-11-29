@class NSString, AWETemplateTagsTriggerEvent;

@interface AWETemplateTagsBuildContext : NSObject

@property (copy, nonatomic) NSString *businessID;
@property (retain, nonatomic) AWETemplateTagsTriggerEvent *event;

- (void).cxx_destruct;

@end
