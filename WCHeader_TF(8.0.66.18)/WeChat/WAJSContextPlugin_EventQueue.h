@class NSMutableArray;

@interface WAJSContextPlugin_EventQueue : WAJSContextPluginBase {
    NSMutableArray *_arrViewDidAppearEvent;
    NSMutableArray *_eventHandlersWhenIndexDataLoaded;
    NSMutableArray *_arrNavigationViewDidAppearEvent;
}

- (void)mainthread_addEventToViewDidAppearQueue:(id /* block */)a0;
- (void)mainthread_handleEventInViewDidAppearQueue;
- (void)mainthread_addEventToNavigationViewDidAppearQueue:(id /* block */)a0;
- (void)mainthread_handleEventInNavigationViewDidAppearQueue;
- (void)mainthread_addEventWhenIndexDataLoadedQueue:(id /* block */)a0;
- (void)mainthread_handleEventWhenIndexDataLoadedQueue;
- (id)init;
- (void)dealloc;
- (void)anyThread_addEventToViewDidAppearQueue:(id /* block */)a0;
- (id)anyThread_popAllEventInViewDidAppearQueue;
- (void)anyThread_addEventToNavigationViewDidAppearQueue:(id /* block */)a0;
- (id)anyThread_popAllEventInNavigationViewDidAppearQueue;
- (void)anythread_addEventWhenIndexDataLoadedQueue:(id /* block */)a0;
- (id)anyThread_popAllEventWhenIndexDataLoadedQueue;
- (void).cxx_destruct;

@end
