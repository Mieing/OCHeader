@class NSString;
@protocol AWEStudio24StoryUtilsServiceProtocol, AWEStudio24StoryABServiceProtocol, AWEStudio25StoryBusinessServiceProtocol, AWEStudio24StorySettingsServiceProtocol;

@interface AWEStudio24StoryService : HTSService <AWEStudio24StoryServiceProtocol>

@property (readonly, nonatomic) id<AWEStudio24StoryABServiceProtocol> ab;
@property (readonly, nonatomic) id<AWEStudio24StorySettingsServiceProtocol> settings;
@property (readonly, nonatomic) id<AWEStudio24StoryUtilsServiceProtocol> utils;
@property (readonly, nonatomic) id<AWEStudio25StoryBusinessServiceProtocol> business;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
